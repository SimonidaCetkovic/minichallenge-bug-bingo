public class Server{
    private final String id;
    private Status status;
    
    public Server(String id, Status status){
        this.id = id;
        this.status = status;
    }
    
    public String getId(){
        return id;
    }
    
    public Status getStatus(){
        return status;
    }
    
    public void setStatus(Status status){
        this.status = status;
    }
}