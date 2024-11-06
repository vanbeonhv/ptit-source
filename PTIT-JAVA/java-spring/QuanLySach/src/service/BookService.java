/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package service;

import dao.BookDao;
import java.util.List;
import model.Book;

/**
 *
 * @author nguye
 */
public class BookService {

    private BookDao bookDao;

    public BookService() {
        bookDao = new BookDao();
    }

    public List<Book> getAllBook() {
        var books = bookDao.getAllBook();
        if (books.size() == 0) {
            System.out.println("books empty");
        } else {
            for (Book b : books) {
                System.out.println(b);
            }
        }
        return books;

    }

}
